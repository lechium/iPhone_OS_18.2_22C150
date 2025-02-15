//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _EARVoiceCommandDebugInfo : NSObject
{
    _Bool _hasVoiceCommandInExhaustiveParses;	// 8 = 0x8
    _Bool _hasVoiceCommandParses;	// 9 = 0x9
    _Bool _hasVoiceCommandEditIntent;	// 10 = 0xa
    _Bool _hasVoiceCommandAfterReranking;	// 11 = 0xb
    _Bool _hasNoVoiceCommandAfterRespeakCheck;	// 12 = 0xc
    NSString *_precedingUtterance;	// 16 = 0x10
    NSString *_commandUtterance;	// 24 = 0x18
    NSString *_target;	// 32 = 0x20
    NSString *_payload;	// 40 = 0x28
    unsigned long long _commandParserMachContinuousStartTicks;	// 48 = 0x30
    unsigned long long _commandParserMachContinuousEndTicks;	// 56 = 0x38
    unsigned long long _commandParserMachAbsoluteStartTicks;	// 64 = 0x40
    unsigned long long _commandParserMachAbsoluteEndTicks;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000a20f1e
- (void).cxx_destruct;	// IMP=0x0000000000a20fae
@property(readonly, nonatomic) unsigned long long commandParserMachAbsoluteEndTicks; // @synthesize commandParserMachAbsoluteEndTicks=_commandParserMachAbsoluteEndTicks;
@property(readonly, nonatomic) unsigned long long commandParserMachAbsoluteStartTicks; // @synthesize commandParserMachAbsoluteStartTicks=_commandParserMachAbsoluteStartTicks;
@property(readonly, nonatomic) unsigned long long commandParserMachContinuousEndTicks; // @synthesize commandParserMachContinuousEndTicks=_commandParserMachContinuousEndTicks;
@property(readonly, nonatomic) unsigned long long commandParserMachContinuousStartTicks; // @synthesize commandParserMachContinuousStartTicks=_commandParserMachContinuousStartTicks;
@property(readonly, nonatomic) _Bool hasNoVoiceCommandAfterRespeakCheck; // @synthesize hasNoVoiceCommandAfterRespeakCheck=_hasNoVoiceCommandAfterRespeakCheck;
@property(readonly, nonatomic) _Bool hasVoiceCommandAfterReranking; // @synthesize hasVoiceCommandAfterReranking=_hasVoiceCommandAfterReranking;
@property(readonly, nonatomic) _Bool hasVoiceCommandEditIntent; // @synthesize hasVoiceCommandEditIntent=_hasVoiceCommandEditIntent;
@property(readonly, nonatomic) _Bool hasVoiceCommandParses; // @synthesize hasVoiceCommandParses=_hasVoiceCommandParses;
@property(readonly, nonatomic) _Bool hasVoiceCommandInExhaustiveParses; // @synthesize hasVoiceCommandInExhaustiveParses=_hasVoiceCommandInExhaustiveParses;
@property(readonly, nonatomic) NSString *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) NSString *target; // @synthesize target=_target;
@property(readonly, nonatomic) NSString *commandUtterance; // @synthesize commandUtterance=_commandUtterance;
@property(readonly, nonatomic) NSString *precedingUtterance; // @synthesize precedingUtterance=_precedingUtterance;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a20f26
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a20c4b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a20a4c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a20622
- (id)initWithPrecedingUtterance:(id)arg1 commandUtterance:(id)arg2 target:(id)arg3 payload:(id)arg4 hasVoiceCommandInExhaustiveParses:(_Bool)arg5 hasVoiceCommandParses:(_Bool)arg6 hasVoiceCommandEditIntent:(_Bool)arg7 hasVoiceCommandAfterReranking:(_Bool)arg8 hasNoVoiceCommandAfterRespeakCheck:(_Bool)arg9 commandParserMachContinuousStartTicks:(unsigned long long)arg10 commandParserMachContinuousEndTicks:(unsigned long long)arg11 commandParserMachAbsoluteStartTicks:(unsigned long long)arg12 commandParserMachAbsoluteEndTicks:(unsigned long long)arg13;	// IMP=0x0000000000a204f6

@end

