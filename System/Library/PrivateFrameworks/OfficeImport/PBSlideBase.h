//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PBSlideBase : NSObject
{
}

+ (id)nonPlaceholderDrawablesAmongDrawables:(id)arg1;	// IMP=0x0080000000435b75
+ (void)mapSlideNumberPlaceholder:(id)arg1 tgtSlideBase:(id)arg2 state:(id)arg3;	// IMP=0x0080000000038648
+ (_Bool)readColorScheme:(id)arg1 colorScheme:(id)arg2 colorMap:(id)arg3 state:(id)arg4;	// IMP=0x0080000000024270
+ (void)readDrawingGroup:(id)arg1 slide:(id)arg2 state:(id)arg3;	// IMP=0x00800000000279e9
+ (void)readComments:(id)arg1 slide:(id)arg2 state:(id)arg3;	// IMP=0x0080000000435750
+ (unsigned long long)authorIdForName:(id)arg1 state:(id)arg2;	// IMP=0x00800000004355fa
+ (unsigned char)mapDirection:(id)arg1;	// IMP=0x0080000000435e06
+ (id)newOptions:(long long)arg1 transType:(int)arg2;	// IMP=0x00800000001515b5
+ (int)parseTransType:(int)arg1 direction:(long long)arg2;	// IMP=0x008000000015146c
+ (void)parseSlideShowInfo:(struct PptSSSlideInfoAtom *)arg1 slideBase:(id)arg2 state:(id)arg3;	// IMP=0x0080000000151268
+ (_Bool)slideFollowsMasterBackground:(id)arg1;	// IMP=0x0080000000034d51

@end

