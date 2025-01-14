//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID, TITraceLogRecord, TITypologyRecord;

@protocol TITypologyLogProviding
- (void)enumerateRecordsWithBlock:(void (^)(TITypologyRecord *))arg1;
- (void)enumerateParsedTraceRecordsWithBlockIncludingStop:(void (^)(TITraceLogRecord *, _Bool *))arg1;
- (void)enumerateParsedTraceRecordsWithBlock:(void (^)(TITraceLogRecord *))arg1;
- (void)enumerateTraceRecordsWithBlockIncludingStop:(void (^)(TITraceLogRecord *, _Bool *))arg1;
- (void)enumerateTraceRecordsWithBlock:(void (^)(TITraceLogRecord *))arg1;
- (void)enumerateTypologyRecordsWithBlockIncludingStop:(void (^)(TITypologyRecord *, _Bool *))arg1;
- (void)enumerateTypologyRecordsWithBlock:(void (^)(TITypologyRecord *))arg1;
- (TITraceLogRecord *)parsedTraceRecordMatchingUUID:(NSUUID *)arg1;
- (TITraceLogRecord *)traceRecordMatchingUUID:(NSUUID *)arg1;
- (TITypologyRecord *)typologyRecordMatchingUUID:(NSUUID *)arg1;
@end

