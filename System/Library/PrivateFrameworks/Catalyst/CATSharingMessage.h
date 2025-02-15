//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CATSharingMessage : NSObject
{
    long long _messageType;	// 8 = 0x8
    NSDictionary *_contentDictionaryValue;	// 16 = 0x10
}

+ (id)instanceWithDictionary:(id)arg1;	// IMP=0x001000000004acb9
- (void).cxx_destruct;	// IMP=0x000000000004ae62
@property(readonly, copy, nonatomic) NSDictionary *contentDictionaryValue; // @synthesize contentDictionaryValue=_contentDictionaryValue;
@property(readonly, nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
- (id)initWithMessageType:(long long)arg1 contentDictionary:(id)arg2;	// IMP=0x000000000004ab42
- (id)initWithContentMessage:(id)arg1;	// IMP=0x000000000004aab4

@end

