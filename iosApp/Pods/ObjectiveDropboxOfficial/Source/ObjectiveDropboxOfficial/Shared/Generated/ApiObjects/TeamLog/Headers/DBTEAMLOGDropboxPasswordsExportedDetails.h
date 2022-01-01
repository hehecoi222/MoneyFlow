///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGDropboxPasswordsExportedDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DropboxPasswordsExportedDetails` struct.
///
/// Exported passwords.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGDropboxPasswordsExportedDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The platform the device runs export.
@property (nonatomic, readonly, copy) NSString *platform;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param platform The platform the device runs export.
///
/// @return An initialized instance.
///
- (instancetype)initWithPlatform:(NSString *)platform;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DropboxPasswordsExportedDetails` struct.
///
@interface DBTEAMLOGDropboxPasswordsExportedDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGDropboxPasswordsExportedDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGDropboxPasswordsExportedDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGDropboxPasswordsExportedDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGDropboxPasswordsExportedDetails *)instance;

///
/// Deserializes `DBTEAMLOGDropboxPasswordsExportedDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGDropboxPasswordsExportedDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGDropboxPasswordsExportedDetails`
/// object.
///
+ (DBTEAMLOGDropboxPasswordsExportedDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
