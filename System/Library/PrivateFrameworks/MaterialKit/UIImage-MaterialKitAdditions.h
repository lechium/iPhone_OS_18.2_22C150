//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (MaterialKitAdditions)
+ (id)mt_shadowTemplateImageWithAttributes:(CDStruct_437ca384)arg1 scale:(double)arg2 maskCornerRadius:(double)arg3 continuousCorners:(_Bool)arg4 maskSize:(struct CGSize)arg5 resizableCapInsets:(CDStruct_d2b197d1 *)arg6;	// IMP=0x008000000000473c
+ (struct UIEdgeInsets)mt_edgeOutsetsForShadowProperties:(CDStruct_437ca384)arg1 scale:(double)arg2;	// IMP=0x008000000000468a
+ (id)mt_resizableShadowTemplateImageWithAttributes:(CDStruct_437ca384)arg1 scale:(double)arg2 maskCornerRadius:(double)arg3 continuousCorners:(_Bool)arg4 maskSize:(struct CGSize)arg5;	// IMP=0x0080000000004804
- (id)mt_imageWithDefaultShadowAttributesForUserInterfaceStyle:(long long)arg1;	// IMP=0x0010000000004ff6
- (id)_mt_imageWithShadowWithAttributes:(CDStruct_437ca384)arg1 userInterfaceStyle:(long long)arg2;	// IMP=0x0010000000004b6a
@end

