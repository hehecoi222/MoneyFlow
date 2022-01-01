///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLegalHoldsPolicyUpdateArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LegalHoldsPolicyUpdateArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLegalHoldsPolicyUpdateArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The legal hold Id.
@property (nonatomic, readonly, copy) NSString *id_;

/// Policy new name.
@property (nonatomic, readonly, copy, nullable) NSString *name;

/// Policy new description.
@property (nonatomic, readonly, copy, nullable) NSString *description_;

/// List of team member IDs to apply the policy on.
@property (nonatomic, readonly, nullable) NSArray<NSString *> *members;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param id_ The legal hold Id.
/// @param name Policy new name.
/// @param description_ Policy new description.
/// @param members List of team member IDs to apply the policy on.
///
/// @return An initialized instance.
///
- (instancetype)initWithId_:(NSString *)id_
                       name:(nullable NSString *)name
               description_:(nullable NSString *)description_
                    members:(nullable NSArray<NSString *> *)members;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param id_ The legal hold Id.
///
/// @return An initialized instance.
///
- (instancetype)initWithId_:(NSString *)id_;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `LegalHoldsPolicyUpdateArg` struct.
///
@interface DBTEAMLegalHoldsPolicyUpdateArgSerializer : NSObject

///
/// Serializes `DBTEAMLegalHoldsPolicyUpdateArg` instances.
///
/// @param instance An instance of the `DBTEAMLegalHoldsPolicyUpdateArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLegalHoldsPolicyUpdateArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLegalHoldsPolicyUpdateArg *)instance;

///
/// Deserializes `DBTEAMLegalHoldsPolicyUpdateArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLegalHoldsPolicyUpdateArg` API object.
///
/// @return An instantiation of the `DBTEAMLegalHoldsPolicyUpdateArg` object.
///
+ (DBTEAMLegalHoldsPolicyUpdateArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
