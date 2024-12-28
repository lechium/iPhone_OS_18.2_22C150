//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSURL;
@protocol _SFCollaborationItemsRequestDelegate;

__attribute__((visibility("hidden")))
@interface _SFCollaborationItemsRequest : NSObject
{
    _Bool _supportsMultipleCollaboration;	// 8 = 0x8
    _Bool _isURLProviderSupported;	// 9 = 0x9
    id <_SFCollaborationItemsRequestDelegate> _delegate;	// 16 = 0x10
    NSArray *_activityItems;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    NSURL *_managedFileURL;	// 40 = 0x28
    NSMutableArray *_remainingActivityItems;	// 48 = 0x30
    NSMutableArray *_collaborationItems;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001202d0
@property(retain, nonatomic) NSMutableArray *collaborationItems; // @synthesize collaborationItems=_collaborationItems;
@property(retain, nonatomic) NSMutableArray *remainingActivityItems; // @synthesize remainingActivityItems=_remainingActivityItems;
@property(nonatomic) _Bool isURLProviderSupported; // @synthesize isURLProviderSupported=_isURLProviderSupported;
@property(copy, nonatomic) NSURL *managedFileURL; // @synthesize managedFileURL=_managedFileURL;
@property(nonatomic) _Bool supportsMultipleCollaboration; // @synthesize supportsMultipleCollaboration=_supportsMultipleCollaboration;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSArray *activityItems; // @synthesize activityItems=_activityItems;
@property(nonatomic) __weak id <_SFCollaborationItemsRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_addCollaborationItem:(id)arg1;	// IMP=0x000000000011fd4d
- (void)_processRemainingActivityItems;	// IMP=0x000000000011f909
- (id)collaborationService;	// IMP=0x000000000011f8aa
- (void)cancel;	// IMP=0x000000000011f896
- (void)perform;	// IMP=0x000000000011f884
- (id)initWithActivityItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011f70a

@end
