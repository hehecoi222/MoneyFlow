package com.prof18.moneyflow.features.categories

import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.setValue
import androidx.lifecycle.ViewModel
import androidx.lifecycle.ViewModelProvider
import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.flow.collect
import kotlinx.coroutines.launch
import org.koin.java.KoinJavaComponent.getKoin
import presentation.categories.CategoriesUseCase
import presentation.categories.CategoryModel

class CategoriesViewModel(
    private var categoriesUseCase: CategoriesUseCase
): ViewModel() {

    var categoryModel: CategoryModel by mutableStateOf(CategoryModel.Loading)
        private set

    init {
        observeCategoryModel()
        viewModelScope.launch {
            categoriesUseCase.getCategoriesSuspendable()
        }
    }

    private fun observeCategoryModel() {
        viewModelScope.launch {
            categoriesUseCase.observeCategories().collect {
                categoryModel = it
            }
        }
    }

}

class CategoriesViewModelFactory : ViewModelProvider.Factory {
    @Suppress("UNCHECKED_CAST")
    override fun <T : ViewModel?> create(modelClass: Class<T>): T {
        if (modelClass.isAssignableFrom(CategoriesViewModel::class.java)) {
            return CategoriesViewModel(getKoin().get()) as T
        }
        throw IllegalArgumentException("Unknown ViewModel class")
    }
}