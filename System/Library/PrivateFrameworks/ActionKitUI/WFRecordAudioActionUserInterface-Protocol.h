//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKitUI/WFActionRemoteUserInterface-Protocol.h>

@protocol WFRecordAudioActionUserInterface <WFActionRemoteUserInterface>
- (void)showWithOutputFormat:(long long)arg1 startImmediately:(_Bool)arg2 recordingDuration:(double)arg3 completionHandler:(void (^)(WFFileRepresentation *, NSError *))arg4;
@end

