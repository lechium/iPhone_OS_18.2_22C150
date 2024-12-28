//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol MapsSuggestionsFeelerDelegate;

@interface MapsSuggestionsBaseStreamingFeeler
{
}

- (_Bool)updateSignals;	// IMP=0x002000000002920e
- (_Bool)stopUpdatingSignals;	// IMP=0x00100000000291f8
- (_Bool)startUpdatingSignals;	// IMP=0x00100000000291e2
- (long long)disposition;	// IMP=0x00100000000291d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <MapsSuggestionsFeelerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end
