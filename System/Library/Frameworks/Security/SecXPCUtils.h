//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SecXPCUtils : NSObject
{
}

+ (struct __CFString *)copyApplicationIdentifier;	// IMP=0x0080000000021245
+ (struct __CFString *)copyApplicationIdentifierFromConnection:(id)arg1;	// IMP=0x008000000002116e
+ (struct __CFString *)copyApplicationIdentifierFromSelf;	// IMP=0x00800000000210d5
+ (struct __CFString *)copySigningIdentifier:(id)arg1;	// IMP=0x0080000000020fe9
+ (_Bool)clientCanEditPreferenceOwnership;	// IMP=0x0080000000020eab

@end

