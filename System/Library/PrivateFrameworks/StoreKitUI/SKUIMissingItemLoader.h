//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, SKUIResourceLoader;
@protocol SKUIMissingItemDelegate;

__attribute__((visibility("hidden")))
@interface SKUIMissingItemLoader : NSObject
{
    long long _batchSize;	// 8 = 0x8
    id <SKUIMissingItemDelegate> _delegate;	// 16 = 0x10
    NSString *_imageProfile;	// 24 = 0x18
    NSString *_keyProfile;	// 32 = 0x20
    SKUIResourceLoader *_loader;	// 40 = 0x28
    NSMutableDictionary *_requests;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002c8eb7
@property(copy, nonatomic) NSString *keyProfile; // @synthesize keyProfile=_keyProfile;
@property(copy, nonatomic) NSString *imageProfile; // @synthesize imageProfile=_imageProfile;
@property(nonatomic) __weak id <SKUIMissingItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long batchSize; // @synthesize batchSize=_batchSize;
- (void)_requestItems:(id)arg1 withReason:(long long)arg2;	// IMP=0x00000000002c8d3f
- (id)_existingRequestIDForItemID:(id)arg1;	// IMP=0x00000000002c8b91
- (void)itemRequest:(id)arg1 didFinishWithItems:(id)arg2 invalidItemIdentifiers:(id)arg3;	// IMP=0x00000000002c8aa3
- (void)loadItemsWithIdentifiers:(id)arg1 reason:(long long)arg2;	// IMP=0x00000000002c879d
- (void)loadItemsForPageComponent:(id)arg1 startIndex:(long long)arg2 reason:(long long)arg3;	// IMP=0x00000000002c866a
- (id)initWithResourceLoader:(id)arg1;	// IMP=0x00000000002c8580
- (id)init;	// IMP=0x00000000002c856c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

