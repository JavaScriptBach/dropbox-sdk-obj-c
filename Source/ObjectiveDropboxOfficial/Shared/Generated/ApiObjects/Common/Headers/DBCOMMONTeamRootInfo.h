///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBCOMMONRootInfo.h"
#import "DBSerializableProtocol.h"

@class DBCOMMONTeamRootInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamRootInfo` struct.
///
/// Root info when user is member of a CDM team.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBCOMMONTeamRootInfo : DBCOMMONRootInfo <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The path for user's home directory under the shared team root.
@property (nonatomic, readonly, copy) NSString *homePath;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param rootNamespaceId The namespace id for user's root namespace. It will
/// be the namespace id of the shared team root if the user is member of a CDM
/// team. Otherwise it will be same as `homeNamespaceId` in `DBCOMMONRootInfo`.
/// @param homeNamespaceId The namespace id for user's home namespace.
/// @param homePath The path for user's home directory under the shared team
/// root.
///
/// @return An initialized instance.
///
- (instancetype)initWithRootNamespaceId:(NSString *)rootNamespaceId
                        homeNamespaceId:(NSString *)homeNamespaceId
                               homePath:(NSString *)homePath;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TeamRootInfo` struct.
///
@interface DBCOMMONTeamRootInfoSerializer : NSObject

///
/// Serializes `DBCOMMONTeamRootInfo` instances.
///
/// @param instance An instance of the `DBCOMMONTeamRootInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBCOMMONTeamRootInfo` API object.
///
+ (nullable NSDictionary *)serialize:(DBCOMMONTeamRootInfo *)instance;

///
/// Deserializes `DBCOMMONTeamRootInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBCOMMONTeamRootInfo` API object.
///
/// @return An instantiation of the `DBCOMMONTeamRootInfo` object.
///
+ (DBCOMMONTeamRootInfo *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
