//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CLPersistentDictionary : NSObject
{
    _Bool _modified;	// 8 = 0x8
    int _dataProtection;	// 12 = 0xc
    NSString *_filename;	// 16 = 0x10
    NSMutableDictionary *_underlyingDictionary;	// 24 = 0x18
}

+ (id)persistentDictionaryWithFilename:(id)arg1 withDataProtectionClass:(int)arg2;	// IMP=0x004000000074b1ae
@property(retain, nonatomic) NSMutableDictionary *underlyingDictionary; // @synthesize underlyingDictionary=_underlyingDictionary;
@property(readonly, nonatomic) int dataProtection; // @synthesize dataProtection=_dataProtection;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void)markModifiedClean;	// IMP=0x001000000074bc5a
- (void)markModifiedDirty;	// IMP=0x001000000074bc50
- (_Bool)isModified;	// IMP=0x001000000074bc47
- (void)clear;	// IMP=0x001000000074bbe7
- (void)refresh;	// IMP=0x001000000074b7b8
- (void)persist;	// IMP=0x001000000074b369
- (void)setDictionary:(id)arg1;	// IMP=0x001000000074b2ec
- (id)dictionary;	// IMP=0x001000000074b2bc
- (void)dealloc;	// IMP=0x001000000074b26f
- (id)initWithFilename:(id)arg1 withDataProtectionClass:(int)arg2;	// IMP=0x001000000074b1e0

@end

