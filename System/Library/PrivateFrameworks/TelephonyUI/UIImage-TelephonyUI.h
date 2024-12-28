//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIImage.h>

@interface UIImage (TelephonyUI)
+ (id)genericBusinessLogo;	// IMP=0x0030000000014cc3
+ (id)telephonyUIImageNamed:(id)arg1;	// IMP=0x0030000000014b67
+ (long long)fallbackSymbolTypeForCurrentDevice;	// IMP=0x003000000001431b
+ (id)symbolNameForCurrentDevice;	// IMP=0x00300000000140cc
+ (id)systemImageNameForSymbolType:(long long)arg1;	// IMP=0x0030000000013b09
+ (id)customImageNameForSymbolType:(long long)arg1;	// IMP=0x0030000000013afc
+ (_Bool)isCustomSymbol:(long long)arg1;	// IMP=0x0030000000013af4
+ (id)tpImageForSymbolType:(long long)arg1 configuration:(id)arg2;	// IMP=0x00300000000139d6
+ (id)tpHierarchicalImageForSymbolType:(long long)arg1 pointSize:(double)arg2 scale:(long long)arg3;	// IMP=0x003000000001382c
+ (id)tpHierarchicalImageForSymbolType:(long long)arg1 pointSize:(double)arg2;	// IMP=0x003000000001377d
+ (id)tpImageForSymbolType:(long long)arg1 pointSize:(double)arg2;	// IMP=0x0030000000013712
+ (id)tpImageForSymbolType:(long long)arg1 textStyle:(id)arg2 cappedAt:(id)arg3;	// IMP=0x003000000001357e
+ (id)tpImageForSymbolType:(long long)arg1 textStyle:(id)arg2 scale:(long long)arg3 symbolWeight:(long long)arg4;	// IMP=0x00300000000134a9
+ (id)tpImageForSymbolType:(long long)arg1 scale:(long long)arg2 paletteColors:(id)arg3;	// IMP=0x00300000000133b6
+ (id)tpImageForSymbolType:(long long)arg1 textStyle:(id)arg2 scale:(long long)arg3 paletteColors:(id)arg4 isStaticSize:(_Bool)arg5;	// IMP=0x0030000000013246
+ (id)tpImageForSymbolType:(long long)arg1 textStyle:(id)arg2 scale:(long long)arg3 hierarchicalColor:(id)arg4 isStaticSize:(_Bool)arg5;	// IMP=0x00300000000130d6
+ (_Bool)shouldBeHierarchicalSymbolType:(long long)arg1;	// IMP=0x00300000000130b2
+ (id)tpImageForSymbolType:(long long)arg1 textStyle:(id)arg2 scale:(long long)arg3 isStaticSize:(_Bool)arg4;	// IMP=0x003000000001300f
+ (long long)scaleForTPScale:(long long)arg1;	// IMP=0x0030000000012ffb
+ (id)routeGlyphForDeviceType:(long long)arg1 displayStyle:(long long)arg2 color:(id)arg3;	// IMP=0x0030000000012f75
+ (id)routeGlyphForDeviceType:(long long)arg1 displayStyle:(long long)arg2;	// IMP=0x0030000000012efb
+ (id)hierarchicalImageForSymbolType:(long long)arg1 color:(id)arg2;	// IMP=0x0030000000012db0
+ (id)flatImageForSymbolType:(long long)arg1;	// IMP=0x0030000000012c98
+ (id)routeGlyphWithSymbolType:(long long)arg1 displayStyle:(long long)arg2 color:(id)arg3;	// IMP=0x0030000000012b55
+ (id)routeGlyphWithSymbolType:(long long)arg1 displayStyle:(long long)arg2;	// IMP=0x0030000000012adb
+ (id)speakerRouteGlyphForDisplayStyle:(long long)arg1;	// IMP=0x0030000000012ac1
+ (id)bluetoothAudioRouteGlyphForDisplayStyle:(long long)arg1;	// IMP=0x0030000000012aa7
+ (id)headphonesRouteGlyphForDisplayStyle:(long long)arg1;	// IMP=0x0030000000012a8d
+ (id)muteRouteGlyphForDisplayStyle:(long long)arg1;	// IMP=0x0030000000012a73
+ (id)carplayRouteGlyphForDisplayStyle:(long long)arg1;	// IMP=0x0030000000012a59
+ (id)currentDeviceRouteGlyphForDisplayStyle:(long long)arg1;	// IMP=0x0030000000012986
+ (id)videoMessageUnreadGlyphImage;	// IMP=0x0030000000012959
+ (id)videoMessageSensitiveGlyphImage;	// IMP=0x003000000001292c
+ (id)videoMessageRecordGlyphImage;	// IMP=0x003000000001287c
+ (id)voicemailGlyphForSymbolType:(long long)arg1;	// IMP=0x0030000000012800
+ (id)voicemailTTYGlyphImage;	// IMP=0x0030000000012766
+ (id)voicemailReportFeedbackGlyphImage;	// IMP=0x00300000000126cc
+ (id)voicemailPauseGlyphDisabledImage;	// IMP=0x00300000000125db
+ (id)voicemailPauseGlyphImage;	// IMP=0x0030000000012541
+ (id)voicemailPlayGlyphDisabledImage;	// IMP=0x0030000000012450
+ (id)voicemailPlayGlyphImage;	// IMP=0x00300000000123b6
+ (id)voicemailUndeleteGlyphImage;	// IMP=0x00300000000122e7
+ (id)voicemailDeleteGlyphImage;	// IMP=0x003000000001224d
+ (id)voicemailDialRequestGlyphImage;	// IMP=0x00300000000121b3
+ (id)voicemailAudioRouteGlyphImage;	// IMP=0x0030000000012119
+ (id)actionGlyphForSymbolType:(long long)arg1;	// IMP=0x0030000000012018
+ (id)recentsGlyphForSymbolType:(long long)arg1;	// IMP=0x0030000000011fec
+ (id)TTYActionImage;	// IMP=0x0030000000011f52
+ (id)messagesActionImage;	// IMP=0x0030000000011eb8
+ (id)mailActionImage;	// IMP=0x0030000000011e1e
+ (id)recentsVideoCallImage;	// IMP=0x0030000000011d84
+ (id)recentsAudioCallImage;	// IMP=0x0030000000011cea
+ (id)recentsRTTChevronImage;	// IMP=0x0030000000011c50
+ (id)recentsVerifiedCheckmarkImage;	// IMP=0x0030000000011bb6
+ (id)recentsTTYGlyphImage;	// IMP=0x0030000000011b1c
+ (id)recentsTTYRelayGlyphImage;	// IMP=0x0030000000011b0a
+ (id)recentsTTYDirectGlyphImage;	// IMP=0x0030000000011af8
+ (id)recentsOutgoingVideoCallGlyphImage;	// IMP=0x0030000000011a5e
+ (id)recentsOutgoingAudioCallGlyphImage;	// IMP=0x00300000000119c4
+ (id)recentsIncomingVideoCallGlyphImage;	// IMP=0x003000000001192a
+ (id)recentsIncomingAudioCallGlyphImage;	// IMP=0x0030000000011890
+ (id)favoritesGlyphForSymbolType:(long long)arg1;	// IMP=0x0030000000011864
+ (id)favoritesVideoGlyphImage;	// IMP=0x00300000000117ca
+ (id)favoritesTTYRelayGlyphImage;	// IMP=0x0030000000011730
+ (id)favoritesTTYDirectGlyphImage;	// IMP=0x0030000000011696
+ (id)favoritesMessageGlyphImage;	// IMP=0x00300000000115fc
+ (id)favoritesMailGlyphImage;	// IMP=0x0030000000011562
+ (id)favoritesAudioGlyphImage;	// IMP=0x00300000000114c8
+ (id)telephonyUIUnreadIndicatorGlyphImage;	// IMP=0x0030000000011440
+ (id)telephonyUIInfoButtonGlyphImage;	// IMP=0x00300000000113c6
+ (id)telephonyUIActionButtonGlyphImage;	// IMP=0x003000000001134c
+ (void)clearCachedCappedSizeImagesIfNeeded;	// IMP=0x00300000000112a8
+ (_Bool)cappedSizedImagesAreValid;	// IMP=0x0030000000011228
+ (id)tpImageNamed:(id)arg1 inBundle:(id)arg2;	// IMP=0x003000000001c49f
+ (id)_tpImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;	// IMP=0x003000000001c3f3
- (id)tpFlattenedWithColor:(id)arg1;	// IMP=0x0010000000014c44
- (id)imageWithShadow:(id)arg1;	// IMP=0x0010000000014798
- (id)imageWithEtchedBorderOfColor:(id)arg1 radius:(double)arg2;	// IMP=0x0010000000014472
@end
