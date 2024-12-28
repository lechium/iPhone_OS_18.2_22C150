//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIImage.h>

@interface UIImage (MobileSafariFrameworkExtras)
+ (id)sf_chicletStyleImageWithImage:(id)arg1 backgroundColor:(id)arg2 size:(struct CGRect)arg3 cornerRadius:(double)arg4;	// IMP=0x0020000000008f5d
+ (id)safari_currentDeviceImageNameForOrientation:(long long)arg1;	// IMP=0x00200000000086d7
+ (id)sf_imageNamed:(id)arg1;	// IMP=0x0020000000008617
- (_Bool)sf_isLaunchImageSizedForOrientation:(long long)arg1 includesStatusBar:(_Bool *)arg2;	// IMP=0x0010000000008d24
@property(readonly, nonatomic) long long sf_tabSnapshotEffectsVersion;
- (id)sf_initWithCGImage:(struct CGImage *)arg1 tabSnapshotEffectsVersion:(long long)arg2;	// IMP=0x0010000000008c5b
@property(nonatomic, setter=sf_setIsMonogram:) _Bool sf_isMonogram;
- (void)sf_registerFaviconForDarkUserInterfaceStyleWithSize:(struct CGSize)arg1;	// IMP=0x00100000000088d7
- (void)sf_registerFaviconForDarkUserInterfaceStyle;	// IMP=0x00100000000088ba
- (_Bool)sf_hasRegisteredFaviconForDarkUserInterfaceStyle;	// IMP=0x0010000000008878
@property(readonly, nonatomic) _Bool sf_shouldApplyBackingForDarkBackdrop;
@end
