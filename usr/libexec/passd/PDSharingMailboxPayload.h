//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface PDSharingMailboxPayload : NSObject
{
    NSData *_data;	// 8 = 0x8
    unsigned long long _scheme;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000a5dc3
@property(nonatomic) unsigned long long scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)dictionaryRepresentation;	// IMP=0x00100000000a5cc7
- (id)initWithDictionary:(id)arg1;	// IMP=0x00100000000a5aec
- (id)initWithData:(id)arg1 scheme:(unsigned long long)arg2;	// IMP=0x00100000000a5a4c
- (id)init;	// IMP=0x00100000000a5a3e

@end

