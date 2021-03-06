/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSMutableDictionary, <VMUMemory>, VMUMachOHeader;



@interface VMUDwarfExtractor : VMUSymbolExtractor 
{
    BOOL _shouldUseTaskBasedAddresses;
    NSMutableDictionary *_abbrevDicts;
    <VMUMemory> *_infoMem;
    <VMUMemory> *_abbrevMem;
    <VMUMemory> *_lineMem;
    <VMUMemory> *_strMem;
    VMUMachOHeader *_hdr;
}

+ (id)dwarfExtractorWithMachOHeader:(id)arg1;

- (id)initWithMachOHeader:(id)arg1;
- (void)dealloc;
- (void)parseCompilationUnitWithMemoryView:(id)arg1 withHeader:(id)arg2;
- (id)parseAbbrevDictionaryAtOffset:(NSUInteger)arg1;
- (void)parseLineNumberMatrixAtOffset:(unsigned long long)arg1 withBaseDirectory:(id)arg2 withWordSize:(unsigned char)arg3;

@end
