//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/NSObject-Protocol.h>

@protocol PHChangeRequestCore, PHDeleteChangeRequest, PHInsertChangeRequest, PHUpdateChangeRequest;

@protocol PHPerformChangesRequest <NSObject>
- (void)recordOtherChangeRequest:(id <PHChangeRequestCore>)arg1;
- (void)recordDeleteRequest:(id <PHDeleteChangeRequest>)arg1;
- (void)recordUpdateRequest:(id <PHUpdateChangeRequest>)arg1;
- (void)recordInsertRequest:(id <PHInsertChangeRequest>)arg1;
@end
