//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SFCollaborationItem-Protocol.h"

@class CKAllowedSharingOptions, CKContainerSetupInfo, CKShare;

@protocol SFCollaborationCKShareItem <SFCollaborationItem>
@property(retain, nonatomic) CKShare *updatedShare;
@property(retain, nonatomic) CKAllowedSharingOptions *ckOptions;
@property(retain, nonatomic) CKContainerSetupInfo *containerSetupInfo;
@property(readonly, nonatomic) _Bool isServiceManatee;
@end
