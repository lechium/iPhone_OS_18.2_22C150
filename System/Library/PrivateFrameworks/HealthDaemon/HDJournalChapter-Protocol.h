//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDDatabaseTransaction, HDProfile, NSData, NSString;

@protocol HDJournalChapter <NSObject>
@property(readonly, nonatomic) double modificationTime;
@property(readonly, nonatomic) long long size;
@property(readonly, nonatomic) _Bool isOpen;
@property(readonly, copy, nonatomic) NSString *journalPath;
@property(readonly, copy, nonatomic) NSString *name;
- (unsigned int)enumerateEntriesWithProfile:(HDProfile *)arg1 transaction:(HDDatabaseTransaction *)arg2 error:(id *)arg3 handler:(unsigned int (^)(NSArray *, unsigned long long, _Bool, id *))arg4;
- (unsigned int)readVersionWithError:(id *)arg1;
- (void)close;
- (_Bool)removeWithError:(id *)arg1;
- (_Bool)openForReadingWithError:(id *)arg1;
- (_Bool)flushDataToDisk:(id *)arg1;
- (_Bool)appendData:(NSData *)arg1 entryClass:(Class)arg2 error:(id *)arg3;
- (_Bool)canAppendData:(NSData *)arg1;
- (_Bool)createAndOpenForWritingWithError:(id *)arg1;
@end

