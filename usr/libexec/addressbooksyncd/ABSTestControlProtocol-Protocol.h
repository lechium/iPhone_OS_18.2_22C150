//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol ABSTestControlProtocol
- (void)tc_setFixedRetryInternal:(double)arg1;
- (void)tc_setFailureProbablity:(double)arg1;
- (void)tc_setMessageTimeout:(double)arg1;
- (void)tc_setSessionTimeout:(double)arg1;
- (void)tc_requestReset;
- (void)tc_requestDelta;
- (void)tc_setObjectDelay:(double)arg1;
- (void)tc_advanceChangeNumber;
- (void)tc_setAutomaticSync:(_Bool)arg1;
- (void)tc_setNominal;
- (void)tc_status:(void (^)(NSString *))arg1;
@end

