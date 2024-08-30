package com.prof18.moneyflow.data.db.default

import com.prof18.moneyflow.data.db.model.TransactionType
import com.prof18.moneyflow.db.CategoryTable
import com.prof18.moneyflow.presentation.model.CategoryIcon

// TODO: localize?

internal val defaultCategories = listOf(

    CategoryTable(
        id = 0,
        name = "Chi tiêu",
        type = TransactionType.OUTCOME,
        iconName = CategoryIcon.IC_MONEY_CHECK_ALT_SOLID.iconName,
    ),
)
