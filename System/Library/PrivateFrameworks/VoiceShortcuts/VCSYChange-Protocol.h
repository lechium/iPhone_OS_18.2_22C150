//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceShortcuts/SYChange-Protocol.h>
#import <VoiceShortcuts/VCPBCodable-Protocol.h>
#import <VoiceShortcuts/VCPBMessageTyped-Protocol.h>

@class NSString;

@protocol VCSYChange <VCPBCodable, VCPBMessageTyped, SYChange>
@property(readonly, nonatomic) long long changeType;
@property(readonly, nonatomic) NSString *objectIdentifier;
- (id)initWithObjectIdentifier:(NSString *)arg1 changeType:(long long)arg2;
@end

