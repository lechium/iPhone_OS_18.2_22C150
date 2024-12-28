//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSEventMessage : NSObject
{
    int _indexType;	// 8 = 0x8
    int _event;	// 12 = 0xc
    int _dev;	// 16 = 0x10
    unsigned long long _msg_id;	// 24 = 0x18
    unsigned long long _journalNumber;	// 32 = 0x20
    unsigned long long _journalIno;	// 40 = 0x28
    unsigned long long _tocIno;	// 48 = 0x30
    long long _toc_size;	// 56 = 0x38
    const char *_journalName;	// 64 = 0x40
    const char *_journalCookie;	// 72 = 0x48
}

- (void)dealloc;	// IMP=0x002000000006f65c
- (id)description;	// IMP=0x001000000006f3f3
- (id)initWithMessage:(id)arg1;	// IMP=0x001000000006f29a

@end
