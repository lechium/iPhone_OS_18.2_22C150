//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/NSObject-Protocol.h>

@class LPLinkMetadata, SHSheetActivityPerformer;
@protocol SFCollaborationService;

@protocol SHSheetActivityPerformerDelegate <NSObject>
- (id <SFCollaborationService>)collaborationServiceForActivityPerformer:(SHSheetActivityPerformer *)arg1;
- (LPLinkMetadata *)linkMetadataForActivityPerformer:(SHSheetActivityPerformer *)arg1;
@end

