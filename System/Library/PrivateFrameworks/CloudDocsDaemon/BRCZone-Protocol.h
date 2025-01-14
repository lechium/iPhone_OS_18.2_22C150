//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BRCDumpContext, BRCPQLConnection, BRCZoneRowID, NSMutableDictionary, PQLConnection;

@protocol BRCZone
@property(readonly, nonatomic) NSMutableDictionary *plist;
@property(readonly, nonatomic) BRCPQLConnection *db;
@property(readonly, nonatomic) _Bool isPrivateZone;
@property(readonly, nonatomic) _Bool isSharedZone;
@property(retain, nonatomic) BRCZoneRowID *dbRowID;
@property(nonatomic) _Bool needsSave;
- (_Bool)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(PQLConnection *)arg2;
- (_Bool)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(PQLConnection *)arg2;
- (_Bool)dumpStatusToContext:(BRCDumpContext *)arg1 error:(id *)arg2;
- (_Bool)dumpTablesToContext:(BRCDumpContext *)arg1 includeAllItems:(_Bool)arg2 error:(id *)arg3;
@end

