///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGOutdatedLinkViewReportFailedDetails;
@class DBTEAMTeamReportFailureReason;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `OutdatedLinkViewReportFailedDetails` struct.
///
/// Couldn't create report: Views of old links.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGOutdatedLinkViewReportFailedDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Failure reason.
@property (nonatomic, readonly) DBTEAMTeamReportFailureReason *failureReason;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param failureReason Failure reason.
///
/// @return An initialized instance.
///
- (instancetype)initWithFailureReason:(DBTEAMTeamReportFailureReason *)failureReason;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `OutdatedLinkViewReportFailedDetails`
/// struct.
///
@interface DBTEAMLOGOutdatedLinkViewReportFailedDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGOutdatedLinkViewReportFailedDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGOutdatedLinkViewReportFailedDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGOutdatedLinkViewReportFailedDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGOutdatedLinkViewReportFailedDetails *)instance;

///
/// Deserializes `DBTEAMLOGOutdatedLinkViewReportFailedDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGOutdatedLinkViewReportFailedDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGOutdatedLinkViewReportFailedDetails` object.
///
+ (DBTEAMLOGOutdatedLinkViewReportFailedDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
