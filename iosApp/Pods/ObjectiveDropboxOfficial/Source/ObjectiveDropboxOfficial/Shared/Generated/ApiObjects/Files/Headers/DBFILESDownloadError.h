///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESDownloadError;
@class DBFILESLookupError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DownloadError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESDownloadError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESDownloadErrorTag` enum type represents the possible tag states
/// with which the `DBFILESDownloadError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILESDownloadErrorTag){
    /// (no description).
    DBFILESDownloadErrorPath,

    /// This file type cannot be downloaded directly; use `export` instead.
    DBFILESDownloadErrorUnsupportedFile,

    /// (no description).
    DBFILESDownloadErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESDownloadErrorTag tag;

/// (no description). @note Ensure the `isPath` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILESLookupError *path;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "path".
///
/// @param path (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(DBFILESLookupError *)path;

///
/// Initializes union class with tag state of "unsupported_file".
///
/// Description of the "unsupported_file" tag state: This file type cannot be
/// downloaded directly; use `export` instead.
///
/// @return An initialized instance.
///
- (instancetype)initWithUnsupportedFile;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "path".
///
/// @note Call this method and ensure it returns true before accessing the
/// `path` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "path".
///
- (BOOL)isPath;

///
/// Retrieves whether the union's current tag state has value
/// "unsupported_file".
///
/// @return Whether the union's current tag state has value "unsupported_file".
///
- (BOOL)isUnsupportedFile;

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
/// The serialization class for the `DBFILESDownloadError` union.
///
@interface DBFILESDownloadErrorSerializer : NSObject

///
/// Serializes `DBFILESDownloadError` instances.
///
/// @param instance An instance of the `DBFILESDownloadError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESDownloadError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESDownloadError *)instance;

///
/// Deserializes `DBFILESDownloadError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESDownloadError` API object.
///
/// @return An instantiation of the `DBFILESDownloadError` object.
///
+ (DBFILESDownloadError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
