///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"
#import "DBTEAMCOMMONGroupSummary.h"

@class DBSHARINGGroupInfo;
@class DBTEAMCOMMONGroupManagementType;
@class DBTEAMCOMMONGroupType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupInfo` struct.
///
/// The information about a group. Groups is a way to manage a list of users
/// who need same access permission to the shared folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGGroupInfo : DBTEAMCOMMONGroupSummary <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The type of group.
@property (nonatomic, readonly) DBTEAMCOMMONGroupType *groupType;

/// If the current user is a member of the group.
@property (nonatomic, readonly) NSNumber *isMember;

/// If the current user is an owner of the group.
@property (nonatomic, readonly) NSNumber *isOwner;

/// If the group is owned by the current user's team.
@property (nonatomic, readonly) NSNumber *sameTeam;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param groupName (no description).
/// @param groupId (no description).
/// @param groupManagementType Who is allowed to manage the group.
/// @param groupType The type of group.
/// @param isMember If the current user is a member of the group.
/// @param isOwner If the current user is an owner of the group.
/// @param sameTeam If the group is owned by the current user's team.
/// @param groupExternalId External ID of group. This is an arbitrary ID that an
/// admin can attach to a group.
/// @param memberCount The number of members in the group.
///
/// @return An initialized instance.
///
- (instancetype)initWithGroupName:(NSString *)groupName
                          groupId:(NSString *)groupId
              groupManagementType:(DBTEAMCOMMONGroupManagementType *)groupManagementType
                        groupType:(DBTEAMCOMMONGroupType *)groupType
                         isMember:(NSNumber *)isMember
                          isOwner:(NSNumber *)isOwner
                         sameTeam:(NSNumber *)sameTeam
                  groupExternalId:(nullable NSString *)groupExternalId
                      memberCount:(nullable NSNumber *)memberCount;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param groupName (no description).
/// @param groupId (no description).
/// @param groupManagementType Who is allowed to manage the group.
/// @param groupType The type of group.
/// @param isMember If the current user is a member of the group.
/// @param isOwner If the current user is an owner of the group.
/// @param sameTeam If the group is owned by the current user's team.
///
/// @return An initialized instance.
///
- (instancetype)initWithGroupName:(NSString *)groupName
                          groupId:(NSString *)groupId
              groupManagementType:(DBTEAMCOMMONGroupManagementType *)groupManagementType
                        groupType:(DBTEAMCOMMONGroupType *)groupType
                         isMember:(NSNumber *)isMember
                          isOwner:(NSNumber *)isOwner
                         sameTeam:(NSNumber *)sameTeam;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GroupInfo` struct.
///
@interface DBSHARINGGroupInfoSerializer : NSObject

///
/// Serializes `DBSHARINGGroupInfo` instances.
///
/// @param instance An instance of the `DBSHARINGGroupInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGGroupInfo` API object.
///
+ (nullable NSDictionary *)serialize:(DBSHARINGGroupInfo *)instance;

///
/// Deserializes `DBSHARINGGroupInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGGroupInfo` API object.
///
/// @return An instantiation of the `DBSHARINGGroupInfo` object.
///
+ (DBSHARINGGroupInfo *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
