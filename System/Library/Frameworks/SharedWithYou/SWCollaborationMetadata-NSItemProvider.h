//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SharedWithYouCore/SWCollaborationMetadata.h>

@class NSArray, NSString;

@interface SWCollaborationMetadata (NSItemProvider)
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x0010000000011388
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000010fe6
+ (id)readableTypeIdentifiersForItemProvider;	// IMP=0x0010000000010f71
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011472
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

- (id)softSigningController;	// IMP=0x00100000000111e7
- (id)processSigningQueue;	// IMP=0x0010000000010eee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
