//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

@interface RMConduitState : NSManagedObject
{
}

- (id)reportDetails;	// IMP=0x002000000000690f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *enrollmentToken; // @dynamic enrollmentToken;
@property(nonatomic) short errorState; // @dynamic errorState;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *lastProcessedCommandToken; // @dynamic lastProcessedCommandToken;
@property(copy, nonatomic) NSString *lastProcessedDeclarationsToken; // @dynamic lastProcessedDeclarationsToken;
@property(copy, nonatomic) NSString *lastReceivedCommandToken; // @dynamic lastReceivedCommandToken;
@property(copy, nonatomic) NSString *lastReceivedDeclarationsToken; // @dynamic lastReceivedDeclarationsToken;
@property(copy, nonatomic) NSDate *lastReceivedServerTokensFromServerTimestamp; // @dynamic lastReceivedServerTokensFromServerTimestamp;
@property(copy, nonatomic) NSDate *lastReceivedServerTokensTimestamp; // @dynamic lastReceivedServerTokensTimestamp;
@property(readonly) Class superclass;

@end

