//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SEMPersonaUtilities : NSObject
{
}

+ (_Bool)enumerateAndAssumeAllUserPersonas:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0080000000040589
+ (id)allProfilesWithError:(id *)arg1;	// IMP=0x0080000000040581
+ (_Bool)isUserPersonaIdentifier:(id)arg1;	// IMP=0x0080000000040579
+ (void)runAsPersonaIdentifier:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0080000000040567
+ (_Bool)currentPersonaIsDefault;	// IMP=0x008000000004055f
+ (id)currentPersonaIdentifier;	// IMP=0x0080000000040557

@end

