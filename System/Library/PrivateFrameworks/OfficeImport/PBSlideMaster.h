//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PBSlideMaster
{
}

+ (void)flattenPlaceholderTextStylesIntoLayout:(id)arg1 layoutType:(int)arg2 masterStyleMap:(id)arg3;	// IMP=0x00800000000387d6
+ (void)setSlideMasterTextStyles:(id)arg1 state:(id)arg2;	// IMP=0x0080000000436a30
+ (void)readSlideMasterColorScheme:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;	// IMP=0x00800000004368b9
+ (void)readSlideMasterTextStyles:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;	// IMP=0x00800000004367c1
+ (void)setFont:(id)arg1 fromCharacterProperties:(id)arg2;	// IMP=0x0080000000023e25
+ (void)setCannedOtherTextListStyle:(id)arg1;	// IMP=0x008000000043658d
+ (void)padMissingLevels:(id)arg1;	// IMP=0x008000000002283a
+ (id)createMasterStyleMap:(id)arg1 state:(id)arg2;	// IMP=0x0080000000022385
+ (void)flattenMasterStyleType:(int)arg1 baseType:(int)arg2 masterStyleMap:(id)arg3;	// IMP=0x00800000004363c6
+ (void)flattenBaseMasterStyleType:(int)arg1 masterStyleMap:(id)arg2;	// IMP=0x00800000004361e2
+ (void)readSlideMasterName:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;	// IMP=0x008000000043609c
+ (void)readMasterDrawables:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;	// IMP=0x00800000000279cb
+ (void)flattenTextStyle:(id)arg1 intoTextBox:(id)arg2;	// IMP=0x0080000000038b03
+ (id)textBodyForPlaceholderType:(int)arg1 slideLayout:(id)arg2;	// IMP=0x00800000000389e3
+ (int)textTypeFor:(int)arg1 placeholderType:(int)arg2;	// IMP=0x0080000000038acb

@end

