//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface DDScannerObject : NSObject
{
    struct __DDScanner {
        struct __CFRuntimeBase {
            unsigned long long _field1;
            _Atomic unsigned long long _field2;
        } _field1;
        struct __DDLRTable *_field2;
        struct __DDLexer *_field3;
        struct __DDCache *_field4;
        struct __DDTokenCache *_field5;
        struct __DDLexemCache *_field6;
        struct __DDScanQuery *_field7;
        struct __DDScanQuery *_field8;
        struct __DDLookupTable *_field9[7];
        struct __CFString *_field10;
        double _field11;
        struct __CFData *_field12;
        struct DDSourceMatchCache *_field13;
        struct __CFArray *_field14;
        struct __CFArray *_field15;
        long long _field16;
        long long _field17;
        long long _field18;
        long long _field19;
        char *_field20;
        CDUnknownBlockType _field21;
        double _field22;
        unsigned int :1;
        unsigned int :1;
        unsigned char _field23;
        unsigned short _field24;
        unsigned char _field25;
        struct __CFLocale *_field26;
    } *_scanner;	// 8 = 0x8
    int _type;	// 16 = 0x10
    _Bool _hasBasicType;	// 20 = 0x14
    long long _jobIdentifier;	// 24 = 0x18
    NSXPCConnection *_connectionToService;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000240c
- (void)dealloc;	// IMP=0x00000000000023cd

@end
