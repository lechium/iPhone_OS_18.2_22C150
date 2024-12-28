//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString, UICollectionReusableView;

__attribute__((visibility("hidden")))
@interface _UICollectionViewFocusedItemState : NSObject
{
    UICollectionReusableView *_reusableView;	// 8 = 0x8
    NSIndexPath *_indexPath;	// 16 = 0x10
    NSString *_elementKind;	// 24 = 0x18
    unsigned long long _viewType;	// 32 = 0x20
}

+ (id)stateWithReusableView:(id)arg1 indexPath:(id)arg2 elementKind:(id)arg3 viewType:(unsigned long long)arg4;	// IMP=0x00100000012c4599
- (void).cxx_destruct;	// IMP=0x00000000012c525d
- (id)description;	// IMP=0x00000000012c5151
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000012c5042
- (id)initWithReusableView:(id)arg1 indexPath:(id)arg2 elementKind:(id)arg3 viewType:(unsigned long long)arg4;	// IMP=0x00000000012c4b90

@end
