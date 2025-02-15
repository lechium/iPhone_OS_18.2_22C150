//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKChallengeInternal, GKPlayerInternal, NSDictionary, NSString;

@interface GKChallengeInvite : NSObject
{
    NSString *_challengeID;	// 8 = 0x8
    GKChallengeInternal *_challenge;	// 16 = 0x10
    GKPlayerInternal *_receivingPlayer;	// 24 = 0x18
    GKPlayerInternal *_issuingPlayer;	// 32 = 0x20
    NSString *_goalText;	// 40 = 0x28
    NSDictionary *_pushDescriptor;	// 48 = 0x30
    NSString *_gameTitle;	// 56 = 0x38
    NSString *_resolvedBundleID;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000011cb13
- (void).cxx_destruct;	// IMP=0x002000000011e0a1
@property(retain, nonatomic) NSDictionary *pushDescriptor; // @synthesize pushDescriptor=_pushDescriptor;
@property(retain, nonatomic) NSString *challengeID; // @synthesize challengeID=_challengeID;
@property(retain, nonatomic) NSString *resolvedBundleID; // @synthesize resolvedBundleID=_resolvedBundleID;
@property(retain, nonatomic) NSString *gameTitle; // @synthesize gameTitle=_gameTitle;
@property(retain, nonatomic) NSString *goalText; // @synthesize goalText=_goalText;
@property(retain, nonatomic) GKPlayerInternal *issuingPlayer; // @synthesize issuingPlayer=_issuingPlayer;
@property(retain, nonatomic) GKPlayerInternal *receivingPlayer; // @synthesize receivingPlayer=_receivingPlayer;
@property(retain, nonatomic) GKChallengeInternal *challenge; // @synthesize challenge=_challenge;
- (void)loadGoalTextForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000011d47e
- (void)loadDetailsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000011cbfa
- (id)initWithChallenge:(id)arg1;	// IMP=0x001000000011cb8f
- (id)challengeInternalObject;	// IMP=0x001000000011cb87
- (id)description;	// IMP=0x001000000011cb1b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000011ca42
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000011c86a

@end

