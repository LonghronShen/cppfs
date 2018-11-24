
#include <cppfs/windows/LocalFileWatcher.h>

#include <cppfs/windows/LocalFileSystem.h>


namespace cppfs
{


LocalFileWatcher::LocalFileWatcher(FileWatcher & fileWatcher, std::shared_ptr<LocalFileSystem> fs)
: AbstractFileWatcherBackend(fileWatcher)
, m_fs(fs)
{
}

LocalFileWatcher::~LocalFileWatcher()
{
}

std::unique_ptr<AbstractFileWatcherBackend> LocalFileWatcher::clone() const
{
    return std::unique_ptr<AbstractFileWatcherBackend>(new LocalFileWatcher(m_fileWatcher, m_fs));
}

AbstractFileSystem * LocalFileWatcher::fs() const
{
    return static_cast<AbstractFileSystem *>(m_fs.get());
}

void LocalFileWatcher::add(const std::string &, unsigned int)
{
    // [TODO] Implement for Windows
}

void LocalFileWatcher::watch()
{
    // [TODO] Implement for Windows
}


} // namespace cppfs
