//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GQHParagraph : NSObject
{
}

+ (int)handleInlineList:(id)arg1 state:(id)arg2;	// IMP=0x008000000002ed53
+ (int)handleParagraph:(id)arg1 state:(id)arg2 bulletStates:(struct __CFDictionary *)arg3 isMultiColumn:(_Bool)arg4;	// IMP=0x008000000002eba8
+ (int)mapParagraphStyle:(id)arg1 paragraph:(id)arg2 state:(id)arg3 bulletStates:(struct __CFDictionary *)arg4 isMultiColumn:(_Bool)arg5;	// IMP=0x0080000000030248
+ (_Bool)retrieveFontSizeForFirstCharacter:(id)arg1 fontSize:(float *)arg2;	// IMP=0x0080000000030153
+ (id)getBulletStyle:(id)arg1 level:(int)arg2;	// IMP=0x0080000000030122
+ (void)mapBullet:(struct __CFDictionary *)arg1 state:(id)arg2;	// IMP=0x008000000003002f
+ (struct __CFDictionary *)prepareBullet:(id)arg1 paragraph:(id)arg2 style:(id)arg3 state:(id)arg4 bulletStates:(struct __CFDictionary *)arg5 showBullet:(_Bool)arg6;	// IMP=0x008000000002f912
+ (_Bool)setupBulletStatesForParagraphStyle:(id)arg1 paragraph:(id)arg2 state:(id)arg3 bulletStates:(struct __CFDictionary *)arg4;	// IMP=0x008000000002f588
+ (int)handleBookmark:(id)arg1 state:(id)arg2;	// IMP=0x008000000002f4e1
+ (int)handleLink:(id)arg1 state:(id)arg2;	// IMP=0x008000000002f320

@end
