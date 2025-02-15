//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/NSObject-Protocol.h>

@class NSURL, SFCollaborationCloudSharingRequest;
@protocol SFCollaborationItem;

@protocol SFCollaborationCreationDelegate <NSObject>
- (void)createSharingURLForCollaborationRequest:(SFCollaborationCloudSharingRequest *)arg1 completionHandler:(void (^)(SFCollaborationCloudSharingResult *))arg2;

@optional
- (void)manageShareForDocumentInSharedFolder;
- (void)canManageShareForDocumentInSharedFolderWithCompletionHandler:(void (^)(_Bool))arg1;
- (void)canShareFolderContainingExistingSharedItemsWithCompletionHandler:(void (^)(_Bool))arg1;
- (void)shareStatusForURL:(NSURL *)arg1 completionHandler:(void (^)(long long, NSError *))arg2;
- (void)addParticipantsAllowedForCollaborationItem:(id <SFCollaborationItem>)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)createSharingURLWithParticipantsForCollaborationRequest:(SFCollaborationCloudSharingRequest *)arg1 completionHandler:(void (^)(SFCollaborationCloudSharingResult *))arg2;
@end

