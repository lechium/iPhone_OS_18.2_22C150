//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (ChatKitAdditions)
+ (id)__ck_actionImageForSubscriptionShortName:(id)arg1 isFilled:(_Bool)arg2;	// IMP=0x00100000001719de
+ (id)__ck_actionImageForSubscriptionShortName:(id)arg1;	// IMP=0x0010000000171988
+ (id)ckTemplateImageNamed:(id)arg1;	// IMP=0x0010000000171933
+ (id)ckImageNamed:(id)arg1 withTintColor:(id)arg2;	// IMP=0x00100000001718a9
+ (id)ckImageWithData:(id)arg1;	// IMP=0x0010000000170a00
+ (id)abImageNamed:(id)arg1;	// IMP=0x0010000000170951
+ (id)ckColorImageOfSize:(struct CGSize)arg1 withColor:(id)arg2;	// IMP=0x0010000000170894
+ (id)ckImageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x00100000001707f8
+ (id)ckImageNamed:(id)arg1;	// IMP=0x00100000001707e4
+ (id)ck_imageWithEmoji:(id)arg1;	// IMP=0x001000000019376f
+ (id)placeholderExtensionIcon;	// IMP=0x001000000023d68c
+ (id)badgeIconForImageNamed:(id)arg1 inBundle:(id)arg2;	// IMP=0x001000000023d624
- (id)ckImageWithTintColor:(id)arg1 insets:(struct UIEdgeInsets)arg2 traitCollection:(id)arg3;	// IMP=0x001000000017154d
- (id)ckImageWithTintColor:(id)arg1;	// IMP=0x0010000000171519
- (void)decode;	// IMP=0x00100000001714e8
- (id)ck_imageCroppedToCircle;	// IMP=0x001000000017133f
- (id)__ck_ASTCRepresentation;	// IMP=0x00100000001711f1
- (struct CGRect)__ck_contentsCenter;	// IMP=0x0010000000171168
- (id)__ck_imageWithOrientation:(long long)arg1;	// IMP=0x0010000000170ce6
- (id)__ck_resizableBalloonWithBalloonDescriptor:(struct CKBalloonDescriptor_t)arg1 framed:(_Bool)arg2;	// IMP=0x0010000000170b00
- (id)__ck_heicsImageData;	// IMP=0x00100000001e2c0f
- (id)__ck_pngImageData;	// IMP=0x00100000001e2be5
- (_Bool)__ck_writePNGToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001e2b2e
- (_Bool)__ck_writePNGToFilePath:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001e2ad1
- (id)__ck_imageWithTrimmedTransparency;	// IMP=0x001000000021a32a
- (_Bool)isContentDiscarded;	// IMP=0x001000000023d7db
- (void)discardContentIfPossible;	// IMP=0x001000000023d7d5
- (void)endContentAccess;	// IMP=0x001000000023d7cf
- (_Bool)beginContentAccess;	// IMP=0x001000000023d7c7
- (id)iconForInterfaceStyle:(long long)arg1;	// IMP=0x001000000023d52b
- (id)__ck_imageScaledToFillSize:(struct CGSize)arg1;	// IMP=0x00100000005f0eb7
@end
