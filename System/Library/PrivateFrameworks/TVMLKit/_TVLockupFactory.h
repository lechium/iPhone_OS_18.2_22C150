//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TVLockupFactory : NSObject
{
}

+ (void)_validateCellMetrics:(struct TVCellMetrics *)arg1;	// IMP=0x008000000010f8f4
+ (id)_configurationIdentifierForElement:(id)arg1;	// IMP=0x008000000010ebe6
+ (void)_configureStackingPoster:(id)arg1 layout:(id)arg2 element:(id)arg3 forMetrics:(_Bool)arg4;	// IMP=0x008000000010d9a4
+ (void)_configureCell:(id)arg1 layout:(id)arg2 element:(id)arg3;	// IMP=0x008000000010d388
+ (struct UIEdgeInsets)_customCellPaddingForCellMetrics:(struct TVCellMetrics)arg1 withCollectionCellMetrics:(struct TVCellMetrics)arg2 contentAlignment:(long long)arg3;	// IMP=0x008000000010d2a7
+ (void)updateViewLayoutForCell:(id)arg1 forSize:(struct CGSize)arg2;	// IMP=0x008000000010cd21
+ (struct TVCellMetrics)cellMetricsForCollectionElement:(id)arg1;	// IMP=0x008000000010b433
- (void)_registerLockup;	// IMP=0x000000000010b290
- (id)init;	// IMP=0x000000000010b244

@end

