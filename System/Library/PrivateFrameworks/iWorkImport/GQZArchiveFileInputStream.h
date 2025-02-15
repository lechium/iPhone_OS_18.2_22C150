//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GQZArchiveFileInputStream : NSObject
{
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *mFile;	// 8 = 0x8
    char *mBuffer;	// 16 = 0x10
    long long mBufferStart;	// 24 = 0x18
    long long mBufferEnd;	// 32 = 0x20
    long long mSize;	// 40 = 0x28
}

- (long long)size;	// IMP=0x0000000000046c90
- (void)readFromOffset:(long long)arg1 size:(unsigned long long)arg2 buffer:(char *)arg3;	// IMP=0x0000000000046bd4
- (const char *)dataAtOffset:(long long)arg1 size:(unsigned long long)arg2 end:(long long)arg3 readSize:(unsigned long long *)arg4;	// IMP=0x0000000000046a4b
- (void)dealloc;	// IMP=0x0000000000046a03
- (id)initWithPath:(id)arg1;	// IMP=0x00000000000468ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

