//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/MFMailMessage.h>

@class NSArray, NSString;

@interface MFMailMessage (NSItemProvider)
+ (_Bool)dragItemsAreAllMessages:(id)arg1;	// IMP=0x00100000000f6713
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x00100000000f58fb
- (void)_loadMessageDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f6544
- (id)_attributedSubject;	// IMP=0x00100000000f6312
- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f619c
- (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;	// IMP=0x00100000000f600d
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f59ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

@end

