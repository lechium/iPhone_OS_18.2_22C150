//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UICollectionView;
@protocol HomeActionDelegate, HomeUpdateDelegate;

@interface _TtC4Maps35HomeListRootControllerConfiguration : NSObject
{
    MISSING_TYPE *collectionView;	// 8 = 0x8
    MISSING_TYPE *homeActionDelegate;	// 16 = 0x10
    MISSING_TYPE *homeUpdateDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00400000001450b0
- (id)init;	// IMP=0x0010000000145060
- (id)initWithCollectionView:(id)arg1;	// IMP=0x0010000000144ff0
@property(nonatomic) __weak id <HomeUpdateDelegate> homeUpdateDelegate; // @synthesize homeUpdateDelegate;
@property(nonatomic) __weak id <HomeActionDelegate> homeActionDelegate; // @synthesize homeActionDelegate;
@property(nonatomic, readonly) UICollectionView *collectionView; // @synthesize collectionView;

@end
