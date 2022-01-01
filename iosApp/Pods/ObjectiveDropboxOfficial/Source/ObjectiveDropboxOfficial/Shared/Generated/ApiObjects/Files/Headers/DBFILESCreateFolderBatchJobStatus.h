///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESCreateFolderBatchError;
@class DBFILESCreateFolderBatchJobStatus;
@class DBFILESCreateFolderBatchResult;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `CreateFolderBatchJobStatus` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESCreateFolderBatchJobStatus : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESCreateFolderBatchJobStatusTag` enum type represents the possible
/// tag states with which the `DBFILESCreateFolderBatchJobStatus` union can
/// exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILESCreateFolderBatchJobStatusTag){
    /// The asynchronous job is still in progress.
    DBFILESCreateFolderBatchJobStatusInProgress,

    /// The batch create folder has finished.
    DBFILESCreateFolderBatchJobStatusComplete,

    /// The batch create folder has failed.
    DBFILESCreateFolderBatchJobStatusFailed,

    /// (no description).
    DBFILESCreateFolderBatchJobStatusOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESCreateFolderBatchJobStatusTag tag;

/// The batch create folder has finished. @note Ensure the `isComplete` method
/// returns true before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILESCreateFolderBatchResult *complete;

/// The batch create folder has failed. @note Ensure the `isFailed` method
/// returns true before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILESCreateFolderBatchError *failed;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "in_progress".
///
/// Description of the "in_progress" tag state: The asynchronous job is still in
/// progress.
///
/// @return An initialized instance.
///
- (instancetype)initWithInProgress;

///
/// Initializes union class with tag state of "complete".
///
/// Description of the "complete" tag state: The batch create folder has
/// finished.
///
/// @param complete The batch create folder has finished.
///
/// @return An initialized instance.
///
- (instancetype)initWithComplete:(DBFILESCreateFolderBatchResult *)complete;

///
/// Initializes union class with tag state of "failed".
///
/// Description of the "failed" tag state: The batch create folder has failed.
///
/// @param failed The batch create folder has failed.
///
/// @return An initialized instance.
///
- (instancetype)initWithFailed:(DBFILESCreateFolderBatchError *)failed;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "in_progress".
///
/// @return Whether the union's current tag state has value "in_progress".
///
- (BOOL)isInProgress;

///
/// Retrieves whether the union's current tag state has value "complete".
///
/// @note Call this method and ensure it returns true before accessing the
/// `complete` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "complete".
///
- (BOOL)isComplete;

///
/// Retrieves whether the union's current tag state has value "failed".
///
/// @note Call this method and ensure it returns true before accessing the
/// `failed` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "failed".
///
- (BOOL)isFailed;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILESCreateFolderBatchJobStatus` union.
///
@interface DBFILESCreateFolderBatchJobStatusSerializer : NSObject

///
/// Serializes `DBFILESCreateFolderBatchJobStatus` instances.
///
/// @param instance An instance of the `DBFILESCreateFolderBatchJobStatus` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESCreateFolderBatchJobStatus` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESCreateFolderBatchJobStatus *)instance;

///
/// Deserializes `DBFILESCreateFolderBatchJobStatus` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESCreateFolderBatchJobStatus` API object.
///
/// @return An instantiation of the `DBFILESCreateFolderBatchJobStatus` object.
///
+ (DBFILESCreateFolderBatchJobStatus *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
