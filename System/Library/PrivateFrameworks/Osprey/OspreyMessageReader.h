//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface OspreyMessageReader : NSObject
{
    CDUnknownBlockType _messageHandler;	// 8 = 0x8
    unsigned long long _readerState;	// 16 = 0x10
    unsigned long long _messageSequence;	// 24 = 0x18
    _Bool _currentMessageCompressed;	// 32 = 0x20
    unsigned long long _currentMessageSize;	// 40 = 0x28
    NSMutableData *_messageBuffer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000037cc
- (void)readData:(id)arg1;	// IMP=0x0000000000003217
- (void)_produceMessageBody:(id)arg1;	// IMP=0x00000000000031ab
- (id)initWithMessageHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003138

@end
