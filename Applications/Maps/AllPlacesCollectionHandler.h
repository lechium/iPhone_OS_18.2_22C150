//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface AllPlacesCollectionHandler
{
    NSArray *_queryContents;	// 8 = 0x8
    NSArray *storeSubscriptionTypes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000aba2ae
@property(copy, nonatomic) NSArray *storeSubscriptionTypes; // @synthesize storeSubscriptionTypes;
- (void)storeDidChangeWithTypes:(id)arg1;	// IMP=0x0010000000aba09f
- (void)removeObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000ab9cf4
- (_Bool)canDeleteContent;	// IMP=0x0010000000ab9cec
- (void)loadImage;	// IMP=0x0010000000ab9cda
- (void)updateContent;	// IMP=0x0010000000ab9cac
- (void)rebuildContent;	// IMP=0x0010000000ab9c8f
- (int)showAction;	// IMP=0x0010000000ab9c84
- (long long)contentType;	// IMP=0x0010000000ab9c79
- (long long)handlerType;	// IMP=0x0010000000ab9c6e
- (id)glyphImage;	// IMP=0x0010000000ab9c4e
- (id)title;	// IMP=0x0010000000ab9be6
- (id)identifier;	// IMP=0x0010000000ab9bd9
- (id)init;	// IMP=0x0010000000ab9abe

@end

