//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (PRLikenessView)
+ (id)pr_imageWithCGImage:(struct CGImage *)arg1 cropRect:(struct CGRect)arg2;	// IMP=0x0060000000006937
+ (id)pr_imageWithCGImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 scale:(double)arg3;	// IMP=0x0060000000006919
+ (id)pr_imageWithCGImage:(struct CGImage *)arg1;	// IMP=0x0060000000006900
- (id)pr_circleImageWithCropRect:(struct CGRect)arg1;	// IMP=0x0010000000006a3b
- (id)pr_circleImageOfDiameter:(double)arg1 cropRect:(struct CGRect)arg2;	// IMP=0x00100000000069bc
- (struct CGImage *)pr_imageRef;	// IMP=0x00100000000069a2
@end

