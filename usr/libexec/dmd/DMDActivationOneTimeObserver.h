//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface DMDActivationOneTimeObserver
{
    NSDate *_endDate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000ee9f
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
- (void)_registerPredicateObserver;	// IMP=0x001000000000ea8a
- (_Bool)_extractComponentsFromPredicate:(id)arg1;	// IMP=0x001000000000e7b0
- (void)invalidate;	// IMP=0x001000000000e70f
- (id)evaluatePredicateWithError:(id *)arg1;	// IMP=0x001000000000e50c
- (id)initWithDelegate:(id)arg1 uniqueIdentifier:(id)arg2 oneTimePredicate:(id)arg3;	// IMP=0x001000000000e45e

@end

