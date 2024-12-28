//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface WDFont : NSObject
{
    NSString *mName;	// 8 = 0x8
    NSMutableArray *mAlternateNames;	// 16 = 0x10
    int mFontFamily;	// 24 = 0x18
    int mCharacterSet;	// 28 = 0x1c
    int mPitch;	// 32 = 0x20
}

+ (int)cpFontClassFromWdFontFamily:(int)arg1;	// IMP=0x00100000003f0db8
- (void).cxx_destruct;	// IMP=0x00000000003f125c
- (id)description;	// IMP=0x00000000003f121e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003f108d
- (unsigned long long)hash;	// IMP=0x00000000003f103c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003f0f9d
- (id)initWithName:(id)arg1;	// IMP=0x00000000000bcb5c
- (id)init;	// IMP=0x00000000003f0efd
- (void)setPitch:(int)arg1;	// IMP=0x00000000000bcc28
- (int)pitch;	// IMP=0x00000000003f0ef4
- (void)setCharacterSet:(int)arg1;	// IMP=0x00000000000bcc3a
- (int)characterSet;	// IMP=0x00000000003f0eeb
- (void)setFontFamily:(int)arg1;	// IMP=0x00000000000bcc31
- (int)fontFamily;	// IMP=0x00000000003f0ee2
- (id)secondName;	// IMP=0x00000000003f0e96
- (void)addAlternateName:(id)arg1;	// IMP=0x00000000003f0e3a
- (id)alternateNames;	// IMP=0x00000000003f0e2c
- (void)setName:(id)arg1;	// IMP=0x00000000003f0dd4
- (id)name;	// IMP=0x00000000000f4ea3

@end
