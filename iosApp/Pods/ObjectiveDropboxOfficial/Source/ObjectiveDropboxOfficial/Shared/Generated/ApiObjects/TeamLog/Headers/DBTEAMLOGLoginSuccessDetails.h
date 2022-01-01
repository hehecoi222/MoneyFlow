///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGLoginMethod;
@class DBTEAMLOGLoginSuccessDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LoginSuccessDetails` struct.
///
/// Signed in.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGLoginSuccessDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Tells if the login device is EMM managed. Might be missing due to historical
/// data gap.
@property (nonatomic, readonly, nullable) NSNumber *isEmmManaged;

/// Login method.
@property (nonatomic, readonly) DBTEAMLOGLoginMethod *loginMethod;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param loginMethod Login method.
/// @param isEmmManaged Tells if the login device is EMM managed. Might be
/// missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithLoginMethod:(DBTEAMLOGLoginMethod *)loginMethod isEmmManaged:(nullable NSNumber *)isEmmManaged;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param loginMethod Login method.
///
/// @return An initialized instance.
///
- (instancetype)initWithLoginMethod:(DBTEAMLOGLoginMethod *)loginMethod;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `LoginSuccessDetails` struct.
///
@interface DBTEAMLOGLoginSuccessDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGLoginSuccessDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGLoginSuccessDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGLoginSuccessDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGLoginSuccessDetails *)instance;

///
/// Deserializes `DBTEAMLOGLoginSuccessDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGLoginSuccessDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGLoginSuccessDetails` object.
///
+ (DBTEAMLOGLoginSuccessDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
