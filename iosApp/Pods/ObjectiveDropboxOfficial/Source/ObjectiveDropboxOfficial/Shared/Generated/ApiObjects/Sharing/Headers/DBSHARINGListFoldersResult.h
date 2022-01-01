///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGListFoldersResult;
@class DBSHARINGSharedFolderMetadata;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListFoldersResult` struct.
///
/// Result for `listFolders` or `listMountableFolders`, depending on which
/// endpoint was requested. Unmounted shared folders can be identified by the
/// absence of `pathLower` in `DBSHARINGSharedFolderMetadata`.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGListFoldersResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// List of all shared folders the authenticated user has access to.
@property (nonatomic, readonly) NSArray<DBSHARINGSharedFolderMetadata *> *entries;

/// Present if there are additional shared folders that have not been returned
/// yet. Pass the cursor into the corresponding continue endpoint (either
/// `listFoldersContinue` or `listMountableFoldersContinue`) to list additional
/// folders.
@property (nonatomic, readonly, copy, nullable) NSString *cursor;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param entries List of all shared folders the authenticated user has access
/// to.
/// @param cursor Present if there are additional shared folders that have not
/// been returned yet. Pass the cursor into the corresponding continue endpoint
/// (either `listFoldersContinue` or `listMountableFoldersContinue`) to list
/// additional folders.
///
/// @return An initialized instance.
///
- (instancetype)initWithEntries:(NSArray<DBSHARINGSharedFolderMetadata *> *)entries cursor:(nullable NSString *)cursor;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param entries List of all shared folders the authenticated user has access
/// to.
///
/// @return An initialized instance.
///
- (instancetype)initWithEntries:(NSArray<DBSHARINGSharedFolderMetadata *> *)entries;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListFoldersResult` struct.
///
@interface DBSHARINGListFoldersResultSerializer : NSObject

///
/// Serializes `DBSHARINGListFoldersResult` instances.
///
/// @param instance An instance of the `DBSHARINGListFoldersResult` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGListFoldersResult` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGListFoldersResult *)instance;

///
/// Deserializes `DBSHARINGListFoldersResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGListFoldersResult` API object.
///
/// @return An instantiation of the `DBSHARINGListFoldersResult` object.
///
+ (DBSHARINGListFoldersResult *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
