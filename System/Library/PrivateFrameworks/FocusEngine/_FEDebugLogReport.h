//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _FEDebugLogReport : NSObject
{
    unsigned long long _currentIndentLevel;	// 8 = 0x8
    CDUnknownBlockType _fallbackMessagePrefixHandler;	// 16 = 0x10
    NSMutableArray *_statements;	// 24 = 0x18
    NSMutableArray *_prefixStack;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000109c5
@property(retain, nonatomic, getter=_prefixStack) NSMutableArray *prefixStack; // @synthesize prefixStack=_prefixStack;
@property(retain, nonatomic, getter=_statements) NSMutableArray *statements; // @synthesize statements=_statements;
@property(copy, nonatomic) CDUnknownBlockType fallbackMessagePrefixHandler; // @synthesize fallbackMessagePrefixHandler=_fallbackMessagePrefixHandler;
@property(nonatomic) unsigned long long currentIndentLevel; // @synthesize currentIndentLevel=_currentIndentLevel;
- (void)decrementIndentLevelAndPopMessagePrefix;	// IMP=0x000000000001093e
- (void)incrementIndentLevelAndPushMessagePrefix:(id)arg1;	// IMP=0x00000000000108ec
- (id)_messagePrefixAtIndentLevel:(unsigned long long)arg1;	// IMP=0x000000000001077a
- (void)clearAllMessagePrefixes;	// IMP=0x000000000001073d
- (void)popMessagePrefix;	// IMP=0x0000000000010700
- (void)pushMessagePrefixHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001060f
- (void)pushMessagePrefix:(id)arg1;	// IMP=0x000000000001052f
- (void)resetIndentLevel;	// IMP=0x00000000000104c0
- (void)decrementIndentLevel;	// IMP=0x000000000001048e
- (void)incrementIndentLevel;	// IMP=0x000000000001045c
- (void)addLineBreak;	// IMP=0x00000000000103e0
- (void)addMessage:(id)arg1;	// IMP=0x0000000000010275
- (void)addMessageWithFormat:(id)arg1;	// IMP=0x00000000000100e9
@property(readonly, nonatomic) unsigned long long messageCount;
- (id)init;	// IMP=0x0000000000010030

@end

