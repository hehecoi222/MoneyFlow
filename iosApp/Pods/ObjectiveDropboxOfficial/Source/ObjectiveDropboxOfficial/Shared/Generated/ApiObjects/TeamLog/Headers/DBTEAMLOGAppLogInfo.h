///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGAppLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `AppLogInfo` struct.
///
/// App's logged information.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGAppLogInfo : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// App unique ID.
@property (nonatomic, readonly, copy, nullable) NSString *appId;

/// App display name.
@property (nonatomic, readonly, copy, nullable) NSString *displayName;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param appId App unique ID.
/// @param displayName App display name.
///
/// @return An initialized instance.
///
- (instancetype)initWithAppId:(nullable NSString *)appId displayName:(nullable NSString *)displayName;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `AppLogInfo` struct.
///
@interface DBTEAMLOGAppLogInfoSerializer : NSObject

///
/// Serializes `DBTEAMLOGAppLogInfo` instances.
///
/// @param instance An instance of the `DBTEAMLOGAppLogInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGAppLogInfo` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGAppLogInfo *)instance;

///
/// Deserializes `DBTEAMLOGAppLogInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGAppLogInfo` API object.
///
/// @return An instantiation of the `DBTEAMLOGAppLogInfo` object.
///
+ (DBTEAMLOGAppLogInfo *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
